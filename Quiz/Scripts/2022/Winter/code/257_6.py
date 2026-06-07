try:
    a,b,c=1,3,6
    def g(b):
        a-=4
        b=4
        c=2
        return a+b+c
    
    a,b,c=9,2,8
    print(g(a),a,b,c)
    
except: print('error')
