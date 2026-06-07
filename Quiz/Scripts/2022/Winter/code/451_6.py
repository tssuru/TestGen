try:
    a,b,c=9,3,2
    def h(a):
        global c
        a+=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=8,5,4
    print(h(a),a,b,c)
    
except: print('error')
