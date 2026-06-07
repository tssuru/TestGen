try:
    a,b,c=4,7,8
    def g(b):
        global c
        a=5
        b+=5
        c=3
        return a+b+c
    
    a,b,c=2,3,7
    print(g(a),a,b,c)
    
except: print('error')
