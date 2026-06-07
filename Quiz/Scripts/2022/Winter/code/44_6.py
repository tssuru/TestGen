try:
    a,b,c=5,8,2
    def h(b):
        global c
        a*=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=9,6,5
    print(h(a),a,b,c)
    
except: print('error')
