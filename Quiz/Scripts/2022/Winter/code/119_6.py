try:
    a,b,c=9,0,2
    def h(b):
        global c
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=8,5,4
    print(h(a),a,b,c)
    
except: print('error')
