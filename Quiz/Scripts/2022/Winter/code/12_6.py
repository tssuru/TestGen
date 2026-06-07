try:
    a,b,c=6,9,5
    def f(a):
        global c
        a-=1
        b=3
        c=4
        return a+b+c
    
    a,b,c=1,7,2
    print(f(a),a,b,c)
    
except: print('error')
