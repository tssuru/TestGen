try:
    a,b,c=7,2,4
    def h(b):
        global c
        a*=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=5,6,9
    print(h(a),a,b,c)
    
except: print('error')
