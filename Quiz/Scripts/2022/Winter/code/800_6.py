try:
    a,b,c=1,3,2
    def g(a):
        a=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=6,8,9
    print(g(a),a,b,c)
    
except: print('error')
