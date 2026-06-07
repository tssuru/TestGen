try:
    a,b,c=5,2,9
    def h(b):
        global c
        a=3
        b-=1
        c=4
        return a+b+c
    
    a,b,c=6,0,7
    print(h(a),a,b,c)
    
except: print('error')
