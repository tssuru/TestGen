try:
    a,b,c=9,6,7
    def g(a):
        a=1
        b+=3
        c=4
        return a+b+c
    
    a,b,c=6,0,1
    print(g(a),a,b,c)
    
except: print('error')
