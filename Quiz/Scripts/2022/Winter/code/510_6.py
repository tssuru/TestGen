try:
    a,b,c=6,0,2
    def h(b):
        global c
        a=4
        b=3
        c=3
        return a+b+c
    
    a,b,c=8,7,5
    print(h(a),a,b,c)
    
except: print('error')
