try:
    a,b,c=5,7,3
    def f(b):
        global c
        a+=1
        b=3
        c=2
        return a+b+c
    
    a,b,c=0,9,7
    print(f(a),a,b,c)
    
except: print('error')
