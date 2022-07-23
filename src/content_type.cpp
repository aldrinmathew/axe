#include "axe/content_type.hpp"

namespace axe {

std::string contentTypeToString(ContentType type) {
  switch (type) {
  case ContentType::applicationEDI_X12:
    return "application/EDI-X12";
  case ContentType::applicationEDIFACT:
    return "application/EDIFACT";
  case ContentType::applicationJavascript:
    return "application/javascript";
  case ContentType::applicationOctetStream:
    return "application/octet-stream";
  case ContentType::applicationOgg:
    return "application/ogg";
  case ContentType::applicationPdf:
    return "application/pdf";
  case ContentType::applicationXhtmlXml:
    return "application/xhtml+xml";
  case ContentType::applicationXShockwaveFlash:
    return "application/x-shockwave-flash";
  case ContentType::applicationJson:
    return "application/json";
  case ContentType::applicationLdJson:
    return "application/ld+json";
  case ContentType::applicationXml:
    return "application/xml";
  case ContentType::applicationZip:
    return "application/zip";
  case ContentType::application_x_www_form_urlencoded:
    return "application/x-www-form-urlencoded";
  case ContentType::audioMpeg:
    return "audio/mpeg";
  case ContentType::audioXMsWma:
    return "audio/x-ms-wma";
  case ContentType::audioVndRnRealAudio:
    return "audio/vnd.rn-realaudio";
  case ContentType::audioXWav:
    return "audio/x-wav";
  case ContentType::imageGif:
    return "image/gif";
  case ContentType::imageJpeg:
    return "image/jpeg";
  case ContentType::imagePng:
    return "image/png";
  case ContentType::imageTiff:
    return "image/tiff";
  case ContentType::imageVndMicrosoftIcon:
    return "image/vnd.microsoft.icon";
  case ContentType::imageXIcon:
    return "image/x-icon";
  case ContentType::imageVndDjvu:
    return "image/vnd.djvu";
  case ContentType::imageSvgXml:
    return "image/svg+xml";
  case ContentType::multipartMixed:
    return "multipart/mixed";
  case ContentType::multipartAlternative:
    return "multipart/alternative";
  case ContentType::multipartRelated:
    return "multipart/related";
  case ContentType::multipartFormData:
    return "multipart/form-data";
  case ContentType::textCSS:
    return "text/css";
  case ContentType::textCSV:
    return "text/csv";
  case ContentType::textHTML:
    return "text/html";
  case ContentType::textJavascript:
    return "text/javascript (obsolete)";
  case ContentType::textPlain:
    return "text/plain";
  case ContentType::textXML:
    return "text/xml";
  case ContentType::videoMPEG:
    return "video/mpeg";
  case ContentType::videoMP4:
    return "video/mp4";
  case ContentType::videoQuicktime:
    return "video/quicktime";
  case ContentType::videoXMsWMV:
    return "video/x-ms-wmv";
  case ContentType::videoXMsVideo:
    return "video/x-msvideo";
  case ContentType::videoXFlv:
    return "video/x-flv";
  case ContentType::videoWebm:
    return "video/webm";
  case ContentType::applicationVNDOasisOpenDocumentText:
    return "application/vnd.oasis.opendocument.text";
  case ContentType::applicationVNDOasisOpenDocumentSpreadsheet:
    return "application/vnd.oasis.opendocument.spreadsheet";
  case ContentType::applicationVNDOasisOpenDocumentPresentation:
    return "application/vnd.oasis.opendocument.presentation";
  case ContentType::applicationVNDOasisOpenDocumentGraphics:
    return "application/vnd.oasis.opendocument.graphics";
  case ContentType::applicationVNDMsExcel:
    return "application/vnd.ms-excel";
  case ContentType::
      applicationVNDOpenXMLFormatsOfficeDocumentSpreadsheetMLSheet:
    return "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet";
  case ContentType::applicationVNDMsPowerpoint:
    return "application/vnd.ms-powerpoint";
  case ContentType::
      applicationVNDOpenXMLFormatsOfficeDocumentPresentationMLPresentation:
    return "application/"
           "vnd.openxmlformats-officedocument.presentationml.presentation";
  case ContentType::applicationMsWord:
    return "application/msword";
  case ContentType::
      applicationVNDOpenXMLFormatsOfficeDocumentWordProcessingMLDocument:
    return "application/"
           "vnd.openxmlformats-officedocument.wordprocessingml.document";
  case ContentType::applicationVNDMozillaXulXml:
    return "application/vnd.mozilla.xul+xml";
  default:
    return "";
  }
}

ContentType contentTypeFromString(std::string str) {
  if (str == "application/EDI-X12") {
    return ContentType::applicationEDI_X12;
  } else if (str == "application/EDIFACT") {
    return ContentType::applicationEDIFACT;
  } else if (str == "application/javascript") {
    return ContentType::applicationJavascript;
  } else if (str == "application/octet-stream") {
    return ContentType::applicationOctetStream;
  } else if (str == "application/ogg") {
    return ContentType::applicationOgg;
  } else if (str == "application/pdf") {
    return ContentType::applicationPdf;
  } else if (str == "application/xhtml+xml") {
    return ContentType::applicationXhtmlXml;
  } else if (str == "application/x-shockwave-flash") {
    return ContentType::applicationXShockwaveFlash;
  } else if (str == "application/json") {
    return ContentType::applicationJson;
  } else if (str == "application/ld+json") {
    return ContentType::applicationLdJson;
  } else if (str == "application/xml") {
    return ContentType::applicationXml;
  } else if (str == "application/zip") {
    return ContentType::applicationZip;
  } else if (str == "application/x-www-form-urlencoded") {
    return ContentType::application_x_www_form_urlencoded;
  } else if (str == "audio/mpeg") {
    return ContentType::audioMpeg;
  } else if (str == "audio/x-ms-wma") {
    return ContentType::audioXMsWma;
  } else if (str == "audio/vnd.rn-realaudio") {
    return ContentType::audioVndRnRealAudio;
  } else if (str == "audio/x-wav") {
    return ContentType::audioXWav;
  } else if (str == "image/gif") {
    return ContentType::imageGif;
  } else if (str == "image/jpeg") {
    return ContentType::imageJpeg;
  } else if (str == "image/png") {
    return ContentType::imagePng;
  } else if (str == "image/tiff") {
    return ContentType::imageTiff;
  } else if (str == "image/vnd.microsoft.icon") {
    return ContentType::imageVndMicrosoftIcon;
  } else if (str == "image/x-icon") {
    return ContentType::imageXIcon;
  } else if (str == "image/vnd.djvu") {
    return ContentType::imageVndDjvu;
  } else if (str == "image/svg+xml") {
    return ContentType::imageSvgXml;
  } else if (str == "multipart/mixed") {
    return ContentType::multipartMixed;
  } else if (str == "multipart/alternative") {
    return ContentType::multipartAlternative;
  } else if (str == "multipart/related") {
    return ContentType::multipartRelated;
  } else if (str == "multipart/form-data") {
    return ContentType::multipartFormData;
  } else if (str == "text/css") {
    return ContentType::textCSS;
  } else if (str == "text/csv") {
    return ContentType::textCSV;
  } else if (str == "text/html") {
    return ContentType::textHTML;
  } else if (str == "text/javascript (obsolete)") {
    return ContentType::textJavascript;
  } else if (str == "text/plain") {
    return ContentType::textPlain;
  } else if (str == "text/xml") {
    return ContentType::textXML;
  } else if (str == "video/mpeg") {
    return ContentType::videoMPEG;
  } else if (str == "video/mp4") {
    return ContentType::videoMP4;
  } else if (str == "video/quicktime") {
    return ContentType::videoQuicktime;
  } else if (str == "video/x-ms-wmv") {
    return ContentType::videoXMsWMV;
  } else if (str == "video/x-msvideo") {
    return ContentType::videoXMsVideo;
  } else if (str == "video/x-flv") {
    return ContentType::videoXFlv;
  } else if (str == "video/webm") {
    return ContentType::videoWebm;
  } else if (str == "application/vnd.oasis.opendocument.text") {
    return ContentType::applicationVNDOasisOpenDocumentText;
  } else if (str == "application/vnd.oasis.opendocument.spreadsheet") {
    return ContentType::applicationVNDOasisOpenDocumentSpreadsheet;
  } else if (str == "application/vnd.oasis.opendocument.presentation") {
    return ContentType::applicationVNDOasisOpenDocumentPresentation;
  } else if (str == "application/vnd.oasis.opendocument.graphics") {
    return ContentType::applicationVNDOasisOpenDocumentGraphics;
  } else if (str == "application/vnd.ms-excel") {
    return ContentType::applicationVNDMsExcel;
  } else if (str == "application/"
                    "vnd.openxmlformats-officedocument.spreadsheetml.sheet") {
    return ContentType::
        applicationVNDOpenXMLFormatsOfficeDocumentSpreadsheetMLSheet;
  } else if (str == "application/vnd.ms-powerpoint") {
    return ContentType::applicationVNDMsPowerpoint;
  } else if (str ==
             "application/"
             "vnd.openxmlformats-officedocument.presentationml.presentation") {
    return ContentType::
        applicationVNDOpenXMLFormatsOfficeDocumentPresentationMLPresentation;
  } else if (str == "application/msword") {
    return ContentType::applicationMsWord;
  } else if (str ==
             "application/"
             "vnd.openxmlformats-officedocument.wordprocessingml.document") {
    return ContentType::
        applicationVNDOpenXMLFormatsOfficeDocumentWordProcessingMLDocument;
  } else if (str == "application/vnd.mozilla.xul+xml") {
    return ContentType::applicationVNDMozillaXulXml;
  } else {
    return ContentType::none;
  }
}

} // namespace axe