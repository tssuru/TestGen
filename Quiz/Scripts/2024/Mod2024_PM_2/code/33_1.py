try:
    a,b,c=4,1,0
    def f(b):
        global c
        a-=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=7,6,5
    print(f(a),a,b,c)
    
except: print('error')
