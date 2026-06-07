try:
    a,b,c=5,0,4
    def g(b):
        a=3
        b+=2
        c=1
        return a+b+c
    
    a,b,c=7,3,1
    print(g(a),a,b,c)
except: print('error')
