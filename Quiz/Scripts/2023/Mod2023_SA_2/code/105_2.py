try:
    a,b,c=4,1,8
    def g(b):
        global c
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=7,5,0
    print(g(a),a,b,c)
    
except: print('error')
