try:
    a,b,c=5,0,7
    def h(b):
        global c
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=9,2,6
    print(h(a),a,b,c)
    
except: print('error')
