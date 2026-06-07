try:
    a,b,c=2,5,1
    def h(b):
        global c
        a=2
        b-=4
        c=5
        return a+b+c
    
    a,b,c=0,8,3
    print(h(a),a,b,c)
    
except: print('error')
