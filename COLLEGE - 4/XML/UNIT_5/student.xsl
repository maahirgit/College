<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">	
	<xsl:template match="students">
		<student>
			<xsl:apply-templates/>
		</student>
	</xsl:template>

	<xsl:template match="student">
		<xsl:element name="{@first_name}">
		<xsl:attribute name="id"><xsl:value-of select="id"/></xsl:attribute>
			<notes>
				<xsl:value-of select="remarks"/>
			</notes>
		</xsl:element>
	</xsl:template>
	
</xsl:stylesheet>


