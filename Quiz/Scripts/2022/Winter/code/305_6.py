try:
    a,b,c=8,0,5
    def g(b):
        global c
        a=1
        b+=2
        c=5
        return a+b+c
    
    a,b,c=9,1,4
    print(g(a),a,b,c)
    
except: print('error')
