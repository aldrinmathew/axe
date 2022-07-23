#ifndef AXE_CONTENT_TYPE_HPP
#define AXE_CONTENT_TYPE_HPP

#include <string>

namespace axe {

enum class ContentType {
  // Application
  applicationEDI_X12,
  applicationEDIFACT,
  applicationJavascript,
  applicationOctetStream,
  applicationOgg,
  applicationPdf,
  applicationXhtmlXml,
  applicationXShockwaveFlash,
  applicationJson,
  applicationLdJson,
  applicationXml,
  applicationZip,
  application_x_www_form_urlencoded,
  // Audio
  audioMpeg,
  audioXMsWma,
  audioVndRnRealAudio,
  audioXWav,
  // Image
  imageGif,
  imageJpeg,
  imagePng,
  imageTiff,
  imageVndMicrosoftIcon,
  imageXIcon,
  imageVndDjvu,
  imageSvgXml,
  // Multipart
  multipartMixed,
  multipartAlternative,
  multipartRelated,
  multipartFormData,
  // Text
  textCSS,
  textCSV,
  textHTML,
  textJavascript, //< This is Obsolete - Use applicationJavascript
  textPlain,
  textXML,
  // Video
  videoMPEG,
  videoMP4,
  videoQuicktime,
  videoXMsWMV,
  videoXMsVideo,
  videoXFlv,
  videoWebm,
  // VND
  applicationVNDOasisOpenDocumentText,
  applicationVNDOasisOpenDocumentSpreadsheet,
  applicationVNDOasisOpenDocumentPresentation,
  applicationVNDOasisOpenDocumentGraphics,
  applicationVNDMsExcel,
  applicationVNDOpenXMLFormatsOfficeDocumentSpreadsheetMLSheet,
  applicationVNDMsPowerpoint,
  applicationVNDOpenXMLFormatsOfficeDocumentPresentationMLPresentation,
  applicationMsWord,
  applicationVNDOpenXMLFormatsOfficeDocumentWordProcessingMLDocument,
  applicationVNDMozillaXulXml,
  // Invalid content type
  none
};

std::string contentTypeToString(ContentType type);

ContentType contentTypeFromString(std::string str);

} // namespace axe

#endif