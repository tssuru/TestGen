try:
    a,b,c=9,2,4
    def h(b):
        global c
        a*=2
        b=1
        c=2
        return a+b+c
    
    a,b,c=1,0,7
    print(h(a),a,b,c)
    
except: print('error')
