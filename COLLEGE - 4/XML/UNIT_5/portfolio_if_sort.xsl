<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="/">
		<html>
			<body>
			<table border="2">
				<th style="color:red">Stock Name</th>
				<th style="color:red">Price</th>
				<xsl:for-each select="portfolio/stock">
				<xsl:sort select="price" data-type="number" order="ascending"/>
				<xsl:if test="price &lt; 5500">
					<tr>
						<td style="color:yellow"><xsl:value-of select="name"/></td>
						<td style="color:yellow"><xsl:value-of select="price"/></td>
					</tr>
				</xsl:if>
				</xsl:for-each>
			</table>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>