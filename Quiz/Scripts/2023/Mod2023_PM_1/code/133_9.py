try:
    a,b,c=0,1,6
    def g(b):
        a*=2
        b=4
        c=1
        return a+b+c
    
    a,b,c=7,4,8
    print(g(a),a,b,c)
    
except: print('error')
