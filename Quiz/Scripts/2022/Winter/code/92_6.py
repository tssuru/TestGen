try:
    a,b,c=7,4,7
    def f(a):
        global c
        a-=1
        b=3
        c=5
        return a+b+c
    
    a,b,c=2,9,0
    print(f(a),a,b,c)
    
except: print('error')
