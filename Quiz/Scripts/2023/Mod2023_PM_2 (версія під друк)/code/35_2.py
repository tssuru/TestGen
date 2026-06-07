try:
    a,b,c=3,1,4
    def h(b):
        global c
        a-=4
        b=5
        c=3
        return a+b+c
    
    a,b,c=6,9,7
    print(h(a),a,b,c)
    
except: print('error')
