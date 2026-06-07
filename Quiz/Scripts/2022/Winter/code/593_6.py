try:
    a,b,c=2,0,6
    def f(b):
        global c
        a=3
        b*=2
        c=1
        return a+b+c
    
    a,b,c=9,7,5
    print(f(a),a,b,c)
    
except: print('error')
