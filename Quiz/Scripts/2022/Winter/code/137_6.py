try:
    a,b,c=6,0,8
    def g(a):
        a=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=4,1,6
    print(g(a),a,b,c)
    
except: print('error')
