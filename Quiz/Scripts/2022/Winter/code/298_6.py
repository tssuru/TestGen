try:
    a,b,c=3,8,7
    def g(a):
        a=3
        b=3
        c=1
        return a+b+c
    
    a,b,c=9,8,2
    print(g(a),a,b,c)
    
except: print('error')
