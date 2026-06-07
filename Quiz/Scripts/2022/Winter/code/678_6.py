try:
    a,b,c=5,8,6
    def g(a):
        a-=4
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,1,2
    print(g(a),a,b,c)
    
except: print('error')
