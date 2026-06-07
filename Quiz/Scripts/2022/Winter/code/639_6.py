try:
    a,b,c=8,0,7
    def g(b):
        a*=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=5,1,6
    print(g(a),a,b,c)
    
except: print('error')
