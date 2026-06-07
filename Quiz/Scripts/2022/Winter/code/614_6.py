try:
    a,b,c=0,4,8
    def g(b):
        a=3
        b+=5
        c=1
        return a+b+c
    
    a,b,c=9,5,1
    print(g(a),a,b,c)
    
except: print('error')
