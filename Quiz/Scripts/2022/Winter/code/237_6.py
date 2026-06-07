try:
    a,b,c=8,4,1
    def f(b):
        global c
        a-=4
        b=5
        c=2
        return a+b+c
    
    a,b,c=7,0,5
    print(f(a),a,b,c)
    
except: print('error')
