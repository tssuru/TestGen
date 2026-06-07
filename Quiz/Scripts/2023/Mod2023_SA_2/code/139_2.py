try:
    a,b,c=1,9,0
    def f(b):
        global c
        a+=2
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,1,5
    print(f(a),a,b,c)
    
except: print('error')
