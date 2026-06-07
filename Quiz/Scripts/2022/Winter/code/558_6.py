try:
    a,b,c=9,4,2
    def h(b):
        global c
        a=4
        b-=3
        c=5
        return a+b+c
    
    a,b,c=8,0,6
    print(h(a),a,b,c)
    
except: print('error')
