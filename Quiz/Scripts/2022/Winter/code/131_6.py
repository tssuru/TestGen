try:
    a,b,c=4,9,2
    def f(b):
        global c
        a=4
        b-=2
        c=1
        return a+b+c
    
    a,b,c=7,0,3
    print(f(a),a,b,c)
    
except: print('error')
