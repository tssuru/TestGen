try:
    a,b,c=9,1,4
    def f(b):
        global c
        a-=2
        b=5
        c=1
        return a+b+c
    
    a,b,c=8,0,5
    print(f(a),a,b,c)
    
except: print('error')
