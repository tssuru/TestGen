try:
    a,b,c=4,0,9
    def h(b):
        global c
        a=5
        b-=2
        c=2
        return a+b+c
    
    a,b,c=2,1,4
    print(h(a),a,b,c)
    
except: print('error')
