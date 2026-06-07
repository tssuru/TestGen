try:
    a,b,c=0,8,9
    def g(a):
        a=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=2,5,1
    print(g(a),a,b,c)
    
except: print('error')
