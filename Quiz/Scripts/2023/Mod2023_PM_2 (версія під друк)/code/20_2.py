try:
    a,b,c=9,6,0
    def f(b):
        global c
        a+=1
        b=2
        c=3
        return a+b+c
    
    a,b,c=4,2,5
    print(f(a),a,b,c)
    
except: print('error')
