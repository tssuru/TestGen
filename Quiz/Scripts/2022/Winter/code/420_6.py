try:
    a,b,c=8,7,2
    def f(a):
        global c
        a=5
        b+=1
        c=2
        return a+b+c
    
    a,b,c=4,0,6
    print(f(a),a,b,c)
    
except: print('error')
