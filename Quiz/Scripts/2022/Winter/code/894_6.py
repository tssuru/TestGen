try:
    a,b,c=6,4,1
    def h(b):
        global c
        a=3
        b-=5
        c=4
        return a+b+c
    
    a,b,c=9,5,0
    print(h(a),a,b,c)
    
except: print('error')
