#include "reporte_vendedor.h"

reporte_vendedor::reporte_vendedor():reporte()
{
    report->setReportFile("Reporte_Venta_Vendedor.ncr");
}

void reporte_vendedor::set_file_name()
{
    name_reporte.clear();
    this->name_reporte="Reporte_Vendedor.pdf";
    //report->setOutput();
}

void reporte_vendedor::make_querry_vendedor(QString &t_name, QString &vend_name)
{
    QString idtienda,idcolaborador;
    query.clear();
    quer="select idtienda from tienda where alias ='"+t_name+"'";

    if(query.exec(quer))
    {
        quer.clear();
        query.next();
        idtienda=query.value(0).toString();
        query.clear();
        query=find_vendedor(vend_name,0);
        if(query.next())
            idcolaborador=query.value(0).toString();
        name_vendedor.clear();
        name_vendedor.append(query.value(3).toString()+" "+query.value(2).toString()+" "+query.value(1).toString());
        query.clear();
        quer.clear();
        quer="SELECT DISTINCT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha`  FROM venta, linea_venta, producto WHERE venta.`idventa` = linea_venta.`idventa` AND  `idcolaborador` ="+idcolaborador+" AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idtienda` ="+idtienda+"";
        qDebug()<<quer;
        if(query.exec(quer))
        {
            //query.next();
            qDebug()<<"Succes Querry!!";
        }
    }


}
void reporte_vendedor::draw_tabla_final_vendedor()
{
    painter.drawLine(QPoint(90,120),QPoint(990,120));
    painter.drawText(90,135,"Codigo");
    painter.drawText(270,135,"Precio de");
    painter.drawText(270,150,"Compra");

    painter.drawText(450,135,"Precio de");
    painter.drawText(450,150,"Venta");

    painter.drawText(630,135,"Precio");
    painter.drawText(630,150,"Descuento");

    painter.drawText(810,135,"Fecha");
    painter.drawLine(QPoint(90,160),QPoint(990,160));
    /*
    ---------------------------------------
    aaaa    bbbb    cccc    dddd    eeee
    ---------------------------------------
    */
    int x,y,espace_h,espace_w;
    x=90;
    y=175;
    espace_h=30;
    espace_w=180;
     float sum=0.0;
    while(query.next())
    {
        painter.drawText(x,y,query.value(2).toString());
        painter.drawText(x+espace_w,y,query.value(3).toString());
        painter.drawText(x+2*espace_w,y,query.value(4).toString());
        sum+=query.value(4).toFloat();
        painter.drawText(x+3*espace_w,y,query.value(5).toString());
        painter.drawText(x+4*espace_w,y,query.value(6).toString());
        y+=espace_h;
    }
    y+=15;
    painter.drawLine(QPoint(90,y),QPoint(990,y));
    y+=15;
    QString susm;
    susm.setNum(sum);
    painter.drawText(x+4*espace_w,y,susm);


}

void reporte_vendedor::save_reporte_vendedor(QString t_name, QString vend_name)
{
    set_file_name();
    this->current_date=QDate::currentDate();
    this->header_current_date.append(current_date.toString(Qt::ISODate));
    this->current_time=QTime::currentTime();
    this->header_current_hora.append(current_time.toString());

    make_querry_vendedor(t_name,vend_name);

    report->addParameter("sql",quer);
    report->addParameter("nombre",name_vendedor);
    report->addParameter("tienda",t_name);
    fecha_final_s.clear();
    fecha_inicio_s.clear();
    fecha_inicio_s.append(this->fecha_inicio.toString(Qt::ISODate));
    fecha_final_s.append(this->fecha_fin.toString(Qt::ISODate));
    report->addParameter("fecha_inicio",fecha_inicio_s);
    report->addParameter("fecha_final",fecha_final_s);
    report->addParameter("fecha_actual",current_date.toString(Qt::ISODate));
    report->addParameter("hora_actual",current_time.toString());
    report->runReportToShowPreview();


}
QSqlQuery reporte_vendedor::ver_reporte_vendedor(QString t_name, QString vend_name)
{
    QString idtienda,idcolaborador;
    query.clear();
    QString q="select idtienda from tienda where alias ='"+t_name+"'";
    qDebug()<<q;
    if(query.exec(q))
    {
        q.clear();
        query.next();
        idtienda=query.value(0).toString();
        query.clear();
        query=find_vendedor(vend_name,0);
        if(query.next())
            idcolaborador=query.value(0).toString();
        query.clear();
        q.clear();
        q="SELECT  `idcolaborador` ,  `idtienda` ,  `codigo` ,  `precio_compra` ,  `precio_venta` ,  `p_descuento` ,  `fecha` FROM venta, producto WHERE  `idcolaborador` ="+idcolaborador+" AND  '"+this->fecha_inicio.toString(Qt::ISODate)+"' <= `fecha` and `fecha` <= '"+this->fecha_fin.toString(Qt::ISODate)+"' AND  `idtienda` ="+idtienda+"";
        qDebug()<<q;
        if(query.exec(q))
        {
            //query.next();
            qDebug()<<"Succes Querry!!";
        }
        return query;
    }
}
