try:
    a,b,c=3,1,1
    def h(b):
        global c
        a=1
        b-=5
        c=4
        return a+b+c
    
    a,b,c=8,7,3
    print(h(a),a,b,c)
    
except: print('error')
