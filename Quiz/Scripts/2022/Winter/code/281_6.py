try:
    a,b,c=1,0,8
    def g(b):
        global c
        a=2
        b+=5
        c=4
        return a+b+c
    
    a,b,c=6,7,2
    print(g(a),a,b,c)
    
except: print('error')
