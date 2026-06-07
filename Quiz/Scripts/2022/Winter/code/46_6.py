try:
    a,b,c=0,1,3
    def g(a):
        a=1
        b+=2
        c=4
        return a+b+c
    
    a,b,c=7,4,8
    print(g(a),a,b,c)
    
except: print('error')
