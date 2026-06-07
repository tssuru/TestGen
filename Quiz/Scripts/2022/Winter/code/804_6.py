try:
    a,b,c=0,5,6
    def g(b):
        global c
        a=5
        b=1
        c=2
        return a+b+c
    
    a,b,c=9,0,6
    print(g(a),a,b,c)
    
except: print('error')
