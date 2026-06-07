try:
    a,b,c=0,1,2
    def g(b):
        global c
        a=2
        b+=5
        c=1
        return a+b+c
    
    a,b,c=5,7,4
    print(g(a),a,b,c)
    
except: print('error')
