try:
    a,b,c=6,1,2
    def g(b):
        a=5
        b-=3
        c=2
        return a+b+c
    
    a,b,c=0,5,4
    print(g(a),a,b,c)
    
except: print('error')
