try:
    a,b,c=3,7,0
    def g(b):
        a=3
        b*=2
        c=3
        return a+b+c
    
    a,b,c=2,6,1
    print(g(a),a,b,c)
    
except: print('error')
