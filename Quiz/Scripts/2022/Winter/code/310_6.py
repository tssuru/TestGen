try:
    a,b,c=4,0,1
    def g(a):
        a=1
        b+=5
        c=4
        return a+b+c
    
    a,b,c=6,9,8
    print(g(a),a,b,c)
    
except: print('error')
