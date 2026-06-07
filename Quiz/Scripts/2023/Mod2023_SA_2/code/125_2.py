try:
    a,b,c=3,9,5
    def f(a):
        global c
        a+=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=7,6,4
    print(f(a),a,b,c)
    
except: print('error')
