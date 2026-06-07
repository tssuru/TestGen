try:
    a,b,c=0,6,3
    def f(b):
        global c
        a-=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=4,2,0
    print(f(a),a,b,c)
    
except: print('error')
