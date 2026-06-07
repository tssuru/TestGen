try:
    a,b,c=7,2,5
    def h(b):
        global c
        a=4
        b*=5
        c=3
        return a+b+c
    
    a,b,c=3,0,4
    print(h(a),a,b,c)
    
except: print('error')
